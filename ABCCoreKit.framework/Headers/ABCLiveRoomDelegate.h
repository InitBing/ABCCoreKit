//
//  ABCLiveRoomDelegate.h
//  ABCLiveKit
//
//  Created by bing on 2017/5/25.
//  Copyright © 2017年 北京暄暄科技有限公司. All rights reserved.
//

#ifndef ABCLiveRoomDelegate_h
#define ABCLiveRoomDelegate_h


#endif /* ABCLiveRoomDelegate_h */

#import <Foundation/Foundation.h>
#import "ABCLiveUserMo.h"
#import "ABCPublicDefine.h"
#import "ABCMessageMo.h"

@protocol ABCLiveRoomDelegate <NSObject>
@optional
/**
 *  其他人上下麦信息（直播中用不到）
 *
 *  @param userId 用户id
 *  @param result 状态
 */
-(void) onOtherMicStatus:(NSString *) userId result:(ABCSpeakResult) result;
/**
 *  当前在线用户列表
 *
 *  @param userList 用户列表
 */
-(void)	onRefreshUserList:(NSMutableArray *) userList;

/**
 *  用户进入房间
 *
 *  @param userMo ABCLiveUserMo
 */
-(void) onUserLogin:(ABCLiveUserMo *) userMo;

/**
 *  用户离开房间
 *
 *  @param userMo ABCLiveUserMo
 */
-(void) onUserLeave:(ABCLiveUserMo *) userMo;
/**
 *  上麦请求回调（直播中用不到）
 *
 *  @param result 状态
 */
-(void) onResponseSpeak:(ABCSpeakResult) result;

/**
 *  上下麦请求回调 （直播中用不到）
 *
 *  @param result 状态
 *  @param optUid 授权人
 */
-(void) onResponseSpeak:(ABCSpeakResult) result optUid:(NSString *) optUid;

/**
 *  远端用户视频播放（直播中用不到）
 *
 *  @param uid    用户id
 *  @param isHost 是否为主播
 */
-(void) onRemoteVideoJoin:(NSString *) uid isHost:(BOOL) isHost;

/**
 *  用户关闭视频（直播中用不到）
 *
 *  @param uid    用户id
 *  @param isHost 是否host
 */
-(void) onVideoClose:(NSString *) uid isHost:(BOOL) isHost;

/**
 *  播放用户视频（直播中用不到）
 *
 *  @param uid 用户id
 */
-(void) onVideoPlay:(NSString *) uid;

/**
 *  被禁言（直播中用不到）
 *
 *  @param isForbid 是否被禁言
 */
-(void) onForbidSpeakByTeacher:(BOOL) isForbid;

/**
 *  被禁止聊天 （直播中用不到）
 *
 *  @param isForbid 是否被禁止聊天
 */
-(void) onForbidChatByTeacher:(BOOL) isForbid;

/**
 *  邀请发言（直播中用不到）
 *
 *  @param fuid 被邀请人id
 */
-(void) onInviteSpeak:(NSString *) fuid;

/**
 *  同意邀请发言（直播中用不到）
 *
 *  @param userMo    用户信息
 *  @param isApprove 是否同意
 */
-(void) onApproveSpeak:(ABCLiveUserMo *) userMo isApprove:(BOOL) isApprove;

/**
 *  后台关闭直播间
 */
-(void) onCloseRoomByRemote;

#pragma mark - 答题卡
/**
 *  发起答题卡回复
 *  result 是否成功
 */
-(void) onSendQuestionCard:(BOOL)isSuccess;

/**
 *  收到老师发送的答题卡
 *
 */
-(void) onRecieveQuestionCard:(id)questionMo;

/**
 *  收到发送答案结果
 *
 */
- (void)onAnswerQuestion:(BOOL)isSuccess isCorrect:(BOOL)isCorrect answers:(NSString *)answers;

/**
 *  收到某同学答案结果
 *
 */
- (void)onRecieveAnswerQuestion:(id)statisticsMo;

/**
 *  请求答案结果
 *
 */
- (void)onGetAnswerQuestion:(id)statisticsMo;

/**
 *  停止答题
 *
 */
- (void)onSendStopQuestionCard:(BOOL)isSuccess;

/**
 *  收到停止答题
 *
 */
- (void)onRecieveStopQuestionCard;

@end

@protocol ABCLiveMsgDelegate <NSObject>
@optional
/**
 *  接收消息回调
 *
 *  @param messageMo ABCMessageMo
 */
-(void) onMessageRecive:(ABCMessageMo *) messageMo;
@end

@protocol ABCLiveStatusDelegate <NSObject>
@optional

/**
 *  用户状态
 *
 *  @param error ABCLiveErrorCode
 */
-(void) onError:(ABCLiveErrorCode) error;
/**
 *  登录成功
 */
-(void)	onLoginSucceed;
/**
 *  重连成功
 *
 *  @param type ABCConenctType
 */
-(void) onReconnected:(ABCConenctType) type;
/**
 *  重连中
 *
 *  @param type ABCConenctType
 */
-(void) onReconnecting:(ABCConenctType) type;


/**
 *  断开连接
 *
 *  @param type ABCConenctType
 */
-(void) onDisconnect:(ABCConenctType) type;


/**
 *  Host 当前状态
 *
 *  @param status CLOSE，IN，NOTIN，PUSH，NOTPUSH
 */
-(void) onHostStatusChange:(ABCHostStatus) status;

/**
 *  状态改变
 *
 *  @param status LiveStatusCode
 */
-(void) onStatusChange:(ABCStatusCode) status;



@end

@protocol ABCVideoStatusDelegate <NSObject>
@optional

/**
 *  视频播放状态
 *
 *  @param status ABCVideoStatus
 */
-(void) onVideoStatusChange:(ABCVideoStatus) status;

-(void) onVideoBuffferStateChange:(ABCVideoBufferStatus) status;

@end

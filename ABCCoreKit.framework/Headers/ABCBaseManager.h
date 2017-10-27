//
//  ABCBaseManager.h
//  ABCCoreKit
//
//  Created by bing on 2017/9/5.
//  Copyright © 2017年 北京暄暄科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABCLiveRoomDelegate.h"

@interface ABCBaseManager : NSObject

@property (nonatomic, assign) BOOL isHost;

@property (weak, nonatomic) id<ABCLiveRoomDelegate> roomDelegate;
@property (weak, nonatomic) id<ABCLiveMsgDelegate> msgDelegate;
@property (weak, nonatomic) id<ABCLiveStatusDelegate> statusDelegate;
@property (weak, nonatomic) id<ABCVideoStatusDelegate> videoStatusDelegate;
@property (weak, nonatomic) id wbdataDelegate;

/**
 * 发送白板cmd
 *
 * @param data command data
 */
-(void) sendWhiteboardCmd:(NSData *) data pageIndex:(int) pageIndex isReset:(BOOL)isReset isTxi:(BOOL)isTxi;

/**
 * 获取白板历史数据
 */
-(NSMutableDictionary *) getHistoryWhiteboardCmdsByPageIndex:(int) pageIndex;
/**
 * 同步白板某页历史数据
 */
-(void) sendGetWBMultiSyncByPageIndex:(int) pageIndex;

@end

//
//  ABCLiveSDK.h
//  ABCLiveKit
//
//  Created by bing on 2017/5/16.
//  Copyright © 2017年 北京暄暄科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABCPublicDefine.h"

@class ABCRoomMo;
@class ABCUserMo;

@interface ABCLiveSDK : NSObject

@property (nonatomic, strong ) NSString *appId;
@property (nonatomic, strong ) NSString *appSecret;

@property (nonatomic, assign ) BOOL     isLogin;
@property (nonatomic, assign ) BOOL     isDebug; //是否测试环境
@property (nonatomic, strong ) NSString *curUserId;

@property (nonatomic, strong ) NSString *userExt;


+ (instancetype)shareABCLiveSDK;

/**
 *  初始化ABCLiveSDK
 *
 *  @param appId     应用id
 *  @param appSecret 应用secret
 */
-(void) init:(NSString *) appId appSecret:(NSString *) appSecret;

/**
 *  登录
 *
 *  @param openId    openId(用户id)
 *  @param nickname  用户昵称
 *  @param avatarUrl 头像地址
 *  @param success   成功回调
 *  @param fail      失败回调
 */
-(void) loginByOpenId:(NSString *) openId
             nickname:(NSString *) nickname
            avatarUrl:(NSString *)avatarUrl
              success:(void (^)(id responseObject))success
              failure:(void (^)(ABCErrorCode errorCode,NSString *strMsg))fail;

/**
 *  根据roomId获取直播市场
 *
 *  @param roomId   直播间号
 *  @param starTime 校准时间点
 *  @param success  成功回调
 *  @param fail     失败回调
 */
-(void) getLivingDurationByRoomId:(NSString *) roomId
                         starTime:(long long) starTime
                          success:(void (^)(id responseObject))success
                          failure:(void (^)(ABCErrorCode errorCode,NSString *strMsg))fail;

/**
 *  扫码登录到网页云盘
 *
 *  @param verifyCode 验证code
 *  @param success    成功回调
 *  @param fail       失败回调
 */
-(void) loginByWebScan:(NSString *) verifyCode
               success:(void (^)(id responseObject))success
               failure:(void (^)(ABCErrorCode errorCode,NSString *strMsg))fail;

/**
 *  创建新的课程（房间）
 *
 *  @param roomName 课程名称
 *  @param success  成功回调
 *  @param fail     失败回调
 */
-(void) creatRoom:(NSString *) roomName
          success:(void (^)(id responseObject))success
          failure:(void (^)(ABCErrorCode errorCode,NSString *strMsg))fail;

/**
 *  获取个人房间列表
 *
 *  @param pageNo  pageNo 初始页1
 *  @param success 成功回调
 *  @param fail    失败回调
 */
-(void) getMyRoomList:(NSInteger) pageNo
              success:(void (^)(id responseObject))success
              failure:(void (^)(ABCErrorCode errorCode,NSString *strMsg))fail;

/**
 *  获取其他人房间列表
 *
 *  @param pageNo  pageNo 初始页1
 *  @param success 成功回调
 *  @param fail    失败回调
 */
-(void) getOtherRoomList:(NSInteger) pageNo
                 success:(void (^)(id responseObject))success
                 failure:(void (^)(ABCErrorCode errorCode,NSString *strMsg))fail;

/**
 *  上传文件到ABC云盘（PDF，xls,doc,ppt）
 *
 *  @param fileName  文件名称
 *  @param fileData  文件data数据
 *  @param success   成功回调
 *  @param fail      失败回调
 *  @param progress  上传进度
 */
-(void) uploadFileToABCCloud:(NSString *) fileName
                    fileData:(NSData *) fileData
                     success:(void (^)(id responseObject))success
                     failure:(void (^)(NSString *strMsg))fail
                    progress:(void (^)(float))progress;

/**
 *  获取云盘文件列表
 *
 *  @param success 成功回调
 *  @param fail    失败回调
 */
-(void) yunpanGetFileList:(void (^)(id responseObject))success
                  failure:(void (^)(NSString *strMsg))fail;


/**
 *  下载云盘文件
 *
 *  @param fileUrl  文件url地址
 *  @param fileName 文件名称
 *  @param success  成功回调
 *  @param fail     失败回调
 */
-(void) yunpanDownloadFile:(NSString *) fileUrl
                      name:(NSString *) fileName
                   success:(void (^)(id responseObject))success
                   failure:(void (^)(NSString *strMsg))fail;

/**
 *  pdf文件上传
 *
 *  @param fileName  文件名称
 *  @param imageData 文件data
 *  @param success   成功回调
 *  @param fail      失败回调
 *  @param progress  上传进度
 */
-(void) yunpanUploadFile:(NSString *) fileName
               imageData:(NSData *) imageData
                 success:(void (^)(id responseObject))success
                 failure:(void (^)(NSString *strMsg))fail
                progress:(void (^)(float progress))progress;

/**
 *  上传图片
 *
 *  @param imageName  图片名字
 *  @param imageData 图片data
 *  @param success   成功回调
 *  @param fail      失败回调
 *  @param progress  上传进度
 */
-(void) yunpanUploadImage:(NSString *) imageName
                imageData:(NSData *) imageData
                  success:(void (^)(id responseObject))success
                  failure:(void (^)(NSString *strMsg))fail
                 progress:(void (^)(float))progress;

-(void) roomGetRoomByRoomId:(NSString *) roomId
                    success:(void (^)(id responseObject))success
                    failure:(void (^)(ABCErrorCode errorCode,NSString *strMsg))fail;

@end

//
//  ABCPublicDefine.h
//  ABCCoreKit
//
//  Created by bing on 2017/8/12.
//  Copyright © 2017年 北京暄暄科技有限公司. All rights reserved.
//

#ifndef ABCPublicDefine_h
#define ABCPublicDefine_h

typedef NS_ENUM(NSInteger, ABCRoleType) {
    ABCRoleType_STUDENT = 1,    // 学生
    ABCRoleType_TEACHER,        // 老师
    ABCRoleType_HIDER,          // 协调者，隐形人
    ABCRoleType_GUEST,          // 访客
    ABCRoleType_MANAGER         //管理者
};

typedef NS_ENUM(NSInteger, ABCSpeakResult)  {
    ABCSpeakResult_UP_REQ_OK = 1,       // 请求发送成功 等待上麦审核
    ABCSpeakResult_UP_OK,           // 上麦完成 设置下麦逻辑
    ABCSpeakResult_DOWN_SEND_OK,    // 下麦请求发送成功 等待下麦审核
    ABCSpeakResult_DOWN_OK,         // 下麦完成 设置上麦逻辑
    ABCSpeakResult_UP_REQ_FAIL,     // 上麦请求失败
    ABCSpeakResult_DOWN_REQ_FAIL,    // 下麦请求失败
    ABCSpeakResult_NEW_SHOW_HAND,   // 教师收到学生的举手 通知到UI要让其触发获取更新的用户列表
    ABCSpeakResult_UP_SUCCESS,
    ABCSpeakResult_OTHER_SHOW_HAND  //其他人请求上麦
    
    /** 备注: 之前描述是这样的 以下已经不用 废弃!
     * status 1 请求发送成功 等待上麦审核
     * status 2 上麦完成 设置下麦逻辑
     * status 3 下麦请求发送成功 等待下麦审核
     * status 4 下麦完成 设置上麦逻辑
     * status -1 上麦请求失败
     * status -2 下麦请求失败
     **/
};


/**
 *  CLOSE;IN;NOTIN;PUSH;NOTPUSH
 */
typedef NS_ENUM(NSInteger, ABCHostStatus) {
    ABCHost_COLOSE = 0,
    ABCHost_IN,
    ABCHost_NOTIN,
    ABCHost_PUSH,
    ABCHost_NOTPUSH
};


typedef NS_ENUM(NSInteger, ABCConenctType) {
    ABCConenctType_wb,
    ABCConenctType_video
};

typedef NS_ENUM(NSInteger ,ABCStatusCode){
    ABCStatusCode_BeginPublish,
    ABCStatusCode_FinishMeeting,
    ABCStatusCode_HostCloseVideo,
    ABCStatusCode_NoVideoStrem,
    ABCStatusCode_OnDownMic,
    ABCStatusCode_OnKickedOut
};

typedef NS_ENUM(NSInteger ,ABCLiveErrorCode){
    ABCLiveErrorCode_loginFail,
    ABCLiveErrorCode_loginOtherDevice,
    ABCLiveErrorCode_getLivingUrlFail,
    ABCLiveErrorCode_serverFail
};

typedef NS_ENUM(NSInteger ,ABCVideoStatus){
    ABCVideoStatus_Ready = 0,
    ABCVideoStatus_Pending = 1,
    ABCVideoStatus_Start = 2,
    ABCVideoStatus_Stop = 3,
    ABCVideoStatus_Error = 4,
    ABCVideoStatus_Refresh = 5
};

typedef NS_ENUM(NSInteger ,ABCVideoBufferStatus){
    ABCVideoBufferStatus_Unknown = 0,   // 未知
    ABCVideoBufferStatus_Increase = 1,  // 缓冲区状态差应该降低码率
    ABCVideoBufferStatus_Decline = 2    // 缓冲区状态好应该提升码率
};

typedef NS_ENUM(NSInteger, ABCErrorCode) {
    ABCErrorCode_REQUEST_ERROR        = -10000, //请求失败
    ABCErrorCode_COOKIE_INVALID       = -1001, //COOKIE 失效
    ABCErrorCode_COOKIE_VALIDATE      = -1002, //非法COOKIE
    ABCErrorCode_LOGIN_FAULED         = 10401, //登录失败
    ABCErrorCode_LOGINED_OTHER_DEVICE = 10403, //用户在其他地方登录了
    ABCErrorCode_LOGINED_NOT_LOGIN    = 10404, //用户未登录
    
    ABCErrorCode_APPID_EMPTY          = 10415, //appid 为空
    ABCErrorCode_APPSECRET_EMPTY      = 10416, //appSecret 为空
    ABCErrorCode_APP_VERFY_FAIL       = 10417 //appid 或 app_secret不正确
};

/// 视频分辨率(都是16：9 当此设备不支持当前分辨率，自动降低一级)
typedef NS_ENUM (NSUInteger, ABCVideoResolution){
    /// 低分辨率
    ABCVideoResolutionLow = 0,
    /// 中分辨率
    ABCVideoResolutionMid = 1,
    /// 高分辨率
    ABCVideoResolutionHigh = 2
};

typedef enum ABCQuestionType{
    ABCQuestionType_Single = 1, //单选
    ABCQuestionType_Multi, //多选
    ABCQuestionType_Whether, //是非
}ABCQuestionType;


//画笔功能类型
typedef enum ABCWBLineStyle{
    ABCWBLineStyle_Small = 0,                //细
    ABCWBLineStyle_Mid,                      //中
    ABCWBLineStyle_Large                     //粗
}ABCWBLineStyle;

//颜色选择
typedef enum ABCWBColorStyle{
    ABCWBColorStyle_000000=0,                //黑
    ABCWBColorStyle_EA1C24,                  //红
    ABCWBColorStyle_0071BC,                  //蓝
    ABCWBColorStyle_008F45,                  //绿
    ABCWBColorStyle_FFBC11                   //黄
}ABCWBColorStyle;

#endif /* ABCPublicDefine_h */

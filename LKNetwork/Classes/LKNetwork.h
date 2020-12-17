//
//  LKNetwork.h
//  Pods
//
//  Created by mac on 2020/12/7.
//

#ifndef LKNetwork_h
#define LKNetwork_h

#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import <LKNetwork/LKChainRequest.h>
#import <LKNetwork/LKRequest.h>
#import <LKNetwork/LKResponse.h>
#import <LKNetwork/LKUploadRequest.h>
#import <LKNetwork/LKUserInfoManager.h>
#import <LKNetwork/LKUserModel.h>

FOUNDATION_EXPORT double LKNetworkVersionNumber;
FOUNDATION_EXPORT const unsigned char LKNetworkVersionString[];
#endif /* LKNetwork_h */

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtension.h>

@class LSPlugInKitProxy, NSString, NSURL;

@interface NSExtension (CX)

@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly, nonatomic, getter=isEnabledViaPlugInKit) BOOL enabledViaPlugInKit;
@property (readonly, nonatomic) NSString *localizedContainingAppName;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) LSPlugInKitProxy *plugInKitProxy;

@end


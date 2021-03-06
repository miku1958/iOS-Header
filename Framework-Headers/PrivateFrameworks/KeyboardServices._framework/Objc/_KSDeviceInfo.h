//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _KSDeviceInfo : NSObject
{
    BOOL _needsUpdate;
    NSString *_name;
    NSString *_swVersion;
    NSString *_model;
    NSString *_modelDisplayName;
}

@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property (copy, nonatomic) NSString *swVersion; // @synthesize swVersion=_swVersion;

+ (id)ksDecviceWithName:(id)arg1 swVersion:(id)arg2 model:(id)arg3 modelDisplayName:(id)arg4;
+ (id)ksDecviceWithiCloudDeviceInfo:(id)arg1;
+ (id)ksDeviceWithName:(id)arg1 needsUpgrade:(BOOL)arg2;
+ (id)ksDeviceWithName:(id)arg1 swVersion:(id)arg2;
- (void).cxx_destruct;

@end


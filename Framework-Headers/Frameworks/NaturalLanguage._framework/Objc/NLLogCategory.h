//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface NLLogCategory : NSObject
{
    NSObject<OS_os_log> *_internal;
    NSString *_loggingCategory;
    NSString *_loggingSubsystem;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *internal; // @synthesize internal=_internal;
@property (readonly, nonatomic) NSString *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property (readonly, nonatomic) NSString *loggingSubsystem; // @synthesize loggingSubsystem=_loggingSubsystem;

+ (void)_addCategory:(id)arg1 inSubsystem:(id)arg2;
+ (id)_getCategory:(id)arg1;
+ (id)categoryWithName:(id)arg1;
+ (id)categoryWithName:(id)arg1 inSubsystem:(id)arg2;
+ (id)defaultCategory;
+ (void)initialize;
- (void).cxx_destruct;
- (id)initCategory:(id)arg1 inSubsystem:(id)arg2;

@end


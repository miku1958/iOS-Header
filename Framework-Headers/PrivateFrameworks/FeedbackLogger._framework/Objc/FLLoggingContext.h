//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FeedbackLogger/FLLoggingContext-Protocol.h>

@class NSFileManager, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface FLLoggingContext : NSObject <FLLoggingContext>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    NSString *_timestampReferenceIdentifier;
    NSFileManager *_fileManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long now;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *timestampReferenceIdentifier; // @synthesize timestampReferenceIdentifier=_timestampReferenceIdentifier;
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFileManager:(id)arg1;
- (void)report:(id)arg1 payload:(id)arg2;

@end


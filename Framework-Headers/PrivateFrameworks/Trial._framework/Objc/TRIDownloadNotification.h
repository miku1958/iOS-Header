//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Trial/TRIDownloadNotificationProtocol-Protocol.h>

@class NSError, NSString;

@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol>
{
    unsigned long long _type;
    unsigned long long _progress;
    NSError *_error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) unsigned long long progressMaxValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)_descriptionForErrorCode:(unsigned long long)arg1;
+ (id)_dispatchQueue;
+ (id)_notificationWithState:(unsigned long long)arg1;
+ (BOOL)_notifyDownloadUpdateForKey:(id)arg1 withState:(unsigned long long)arg2;
+ (void)deregisterNotificationWithToken:(id)arg1;
+ (id)notificationNameForKey:(id)arg1;
+ (BOOL)notifyDownloadCompletedForKey:(id)arg1;
+ (BOOL)notifyDownloadFailedForKey:(id)arg1 withError:(unsigned long long)arg2;
+ (BOOL)notifyDownloadProgressForKey:(id)arg1 withProgress:(unsigned long long)arg2;
+ (id)registerDownloadNotificationForKey:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 progress:(unsigned long long)arg2 error:(id)arg3;

@end


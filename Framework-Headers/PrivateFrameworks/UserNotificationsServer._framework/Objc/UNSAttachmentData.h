//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/NSCopying-Protocol.h>
#import <UserNotificationsServer/UNSAttachmentDataProvider-Protocol.h>

@class NSString, NSURL;

@interface UNSAttachmentData : NSObject <NSCopying, UNSAttachmentDataProvider>
{
    NSURL *_fileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)dataClassForFamily:(unsigned long long)arg1;
+ (id)dataForFamily:(unsigned long long)arg1 fromFileURL:(id)arg2 error:(id *)arg3;
+ (id)dataFromFileURL:(id)arg1;
+ (BOOL)isFileAtURL:(id)arg1 validForFamily:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)isFileValid:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)initWithFileURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

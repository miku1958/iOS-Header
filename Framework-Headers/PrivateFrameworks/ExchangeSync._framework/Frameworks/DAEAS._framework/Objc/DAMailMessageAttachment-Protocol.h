//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSNumber, NSString;

@protocol DAMailMessageAttachment
- (NSString *)displayName;
- (BOOL)isMostDefinitelyBase64ed;
- (NSString *)name;
- (NSNumber *)size;

@optional
- (unsigned long long)changeType;
- (NSString *)clientId;
- (NSString *)contentType;
- (NSString *)data;
- (BOOL)isInline;
@end


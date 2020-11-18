//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNFileServices-Protocol.h>

@class NSString;

@interface CNFileServices : NSObject <CNFileServices>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (id)NSTemporaryDirectory;
- (int)close:(int)arg1;
- (int)dlclose:(void *)arg1;
- (void *)dlopen:(const char *)arg1:(int)arg2;
- (void *)dlsym:(void *)arg1:(const char *)arg2;
- (int)errnoValue;
- (int)fcntl_flock:(int)arg1:(int)arg2:(struct flock *)arg3;
- (int)flock:(int)arg1:(int)arg2;
- (int)fstatfs:(int)arg1:(struct statfs *)arg2;
- (int)open:(const char *)arg1:(int)arg2:(unsigned short)arg3;
- (int)statfs:(const char *)arg1:(struct statfs *)arg2;

@end

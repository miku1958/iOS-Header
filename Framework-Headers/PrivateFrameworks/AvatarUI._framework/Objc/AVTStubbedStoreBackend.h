//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStoreBackend-Protocol.h>

@class NSString;

@interface AVTStubbedStoreBackend : NSObject <AVTStoreBackend>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)canCreateAvatarWithError:(id *)arg1;
- (BOOL)deleteAvatarWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)duplicateAvatarRecord:(id)arg1 error:(id *)arg2;
- (BOOL)saveAvatar:(id)arg1 error:(id *)arg2;

@end


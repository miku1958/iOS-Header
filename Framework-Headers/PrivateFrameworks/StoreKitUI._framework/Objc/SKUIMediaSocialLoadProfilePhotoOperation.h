//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, SKUIClientContext, SKUIMediaSocialProfile;

@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    SKUIMediaSocialProfile *_profile;
}

@property (copy) CDUnknownBlockType outputBlock;

- (void).cxx_destruct;
- (void)_fetchMonogram;
- (void)_fetchPhoto;
- (void)_fetchProfile;
- (void)_returnPhoto:(id)arg1 isFinal:(BOOL)arg2;
- (id)_silhouette;
- (id)initWithClientContext:(id)arg1;
- (void)main;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@interface NUVideoPropertiesRequest : NURenderRequest
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)submitSynchronous:(out id *)arg1;

@end


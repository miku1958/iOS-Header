//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSString, NSURL;

@interface PXFileBackedAsset : NSObject <PXDisplayAsset>
{
    NSURL *_url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (unsigned long long)isContentEqualTo:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class PXGLayout;
@protocol PXGViewUserData;

@protocol PXGViewSource <PXGLayoutContentSource>
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (id<PXGViewUserData>)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
@end

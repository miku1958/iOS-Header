//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibrary, MPModelKind, MPModelObject;

@interface MPModelLibraryHasPurchasesRequest : NSObject
{
    MPModelObject *_modelObject;
    MPMediaLibrary *_mediaLibrary;
    MPModelKind *_itemKind;
}

@property (strong, nonatomic) MPModelKind *itemKind; // @synthesize itemKind=_itemKind;
@property (strong, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (strong, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end


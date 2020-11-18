//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelObject, MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying>
{
    BOOL _shouldLibraryAdd;
    MPModelObject *_referralObject;
    MPSectionedCollection *_modelObjects;
}

@property (copy, nonatomic) MPSectionedCollection *modelObjects; // @synthesize modelObjects=_modelObjects;
@property (copy, nonatomic) MPModelObject *referralObject; // @synthesize referralObject=_referralObject;
@property (nonatomic) BOOL shouldLibraryAdd; // @synthesize shouldLibraryAdd=_shouldLibraryAdd;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end

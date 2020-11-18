//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSString, PXOperationStatus;

@interface PXGAssetDecorationViewConfiguration : NSObject <NSCopying, PXGViewUserData>
{
    PXOperationStatus *_loadStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) PXOperationStatus *loadStatus; // @synthesize loadStatus=_loadStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

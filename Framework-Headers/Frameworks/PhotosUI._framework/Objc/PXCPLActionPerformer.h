//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionPerformer.h>

@class PXCPLUIStatus;

@interface PXCPLActionPerformer : PXActionPerformer
{
    PXCPLUIStatus *_cplUIStatus;
}

@property (readonly, nonatomic) PXCPLUIStatus *cplUIStatus; // @synthesize cplUIStatus=_cplUIStatus;

- (void).cxx_destruct;
- (void)performActionWithCPLUIStatus:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


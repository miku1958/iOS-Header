//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXIdentityLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;
}

@property (strong, nonatomic) NSArray *children; // @synthesize children;
@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (strong, nonatomic) PXLayoutPerformerOutput *layoutOutput;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (struct CGSize)performLayout;

@end


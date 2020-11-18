//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXBaseLayoutPerformer : NSObject <PXLayoutPerformer>
{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_392cfed4 layoutInput;
}

@property (readonly, nonatomic) NSArray *children; // @synthesize children;
@property (nonatomic) CDStruct_392cfed4 layoutInput; // @synthesize layoutInput;
@property (strong, nonatomic) PXLayoutPerformerOutput *layoutOutput; // @synthesize layoutOutput;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (struct CGSize)performLayout;
- (void)prepareForReuse;

@end

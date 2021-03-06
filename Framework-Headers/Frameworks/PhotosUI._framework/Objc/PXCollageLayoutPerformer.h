//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import <PhotosUICore/PXLayoutPerformer-Protocol.h>

@class NSArray, NSMutableArray, PXLayoutPerformerOutput, PXLeafLayoutPerformer, PXSplitLayoutPerformer;

@interface PXCollageLayoutPerformer : PXBaseLayoutPerformer <PXLayoutPerformer>
{
    BOOL _portraitBias;
    double _outerLayoutRatio;
    double _interItemSpacing;
    long long _numberOfVisibleItems;
    PXLeafLayoutPerformer *_singleItemPerformer;
    PXSplitLayoutPerformer *_twoItemPerformer;
    PXSplitLayoutPerformer *_threeItemPerformer;
    PXSplitLayoutPerformer *_threeItemNestedPerformer;
    NSMutableArray *_mutableChildren;
}

@property (readonly, nonatomic) NSArray *children;
@property (nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (strong, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (strong, nonatomic) NSMutableArray *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property (nonatomic) long long numberOfVisibleItems; // @synthesize numberOfVisibleItems=_numberOfVisibleItems;
@property (nonatomic) double outerLayoutRatio; // @synthesize outerLayoutRatio=_outerLayoutRatio;
@property (nonatomic) BOOL portraitBias; // @synthesize portraitBias=_portraitBias;
@property (strong, nonatomic) PXLeafLayoutPerformer *singleItemPerformer; // @synthesize singleItemPerformer=_singleItemPerformer;
@property (strong, nonatomic) PXSplitLayoutPerformer *threeItemNestedPerformer; // @synthesize threeItemNestedPerformer=_threeItemNestedPerformer;
@property (strong, nonatomic) PXSplitLayoutPerformer *threeItemPerformer; // @synthesize threeItemPerformer=_threeItemPerformer;
@property (strong, nonatomic) PXSplitLayoutPerformer *twoItemPerformer; // @synthesize twoItemPerformer=_twoItemPerformer;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize)performLayout;
- (void)prepareForReuse;

@end


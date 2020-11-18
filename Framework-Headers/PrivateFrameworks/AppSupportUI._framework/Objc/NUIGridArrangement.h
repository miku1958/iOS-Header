//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSupportUI/_NUIGridArrangementContainer-Protocol.h>

@class NSString;
@protocol NUIArrangementContainer, NUIGridArrangementDataSource;

@interface NUIGridArrangement : NSObject <_NUIGridArrangementContainer>
{
    struct _NUIGridArrangement _arrangement;
    id<NUIArrangementContainer> _container;
    id<NUIGridArrangementDataSource> _dataSource;
    double _scale;
    struct {
        unsigned int delegateWidth:1;
        unsigned int delegateHeight:1;
        unsigned int containerDirection:1;
    } _flags;
    struct CGRect _bounds;
}

@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (readonly, weak, nonatomic) id<NUIArrangementContainer> container;
@property (readonly, weak, nonatomic) id<NUIGridArrangementDataSource> dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalDistribution;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalDistribution;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (void)dealloc;
- (struct CGRect)frameForColumns:(struct _NSRange)arg1 rows:(struct _NSRange)arg2 inBounds:(struct CGRect)arg3;
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)layoutSizeFittingSize:(struct CGSize)arg1;
- (void)populateGridArrangementCells:(vector_f8404f95 *)arg1;
- (void)populateGridArrangementDimension:(vector_b8a5df6e *)arg1 withCells:(const vector_f8404f95 *)arg2 axis:(long long)arg3;
- (void)positionItemsInBounds:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)positionItemsInColumns:(struct _NSRange)arg1 rows:(struct _NSRange)arg2 inBounds:(struct CGRect)arg3 block:(CDUnknownBlockType)arg4;
- (void)reloadData;
- (struct CGRect)unionFrameForItemsInColumns:(struct _NSRange)arg1 rows:(struct _NSRange)arg2 inBounds:(struct CGRect)arg3;

@end

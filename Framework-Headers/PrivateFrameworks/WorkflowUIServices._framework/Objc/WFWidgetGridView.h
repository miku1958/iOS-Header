//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUIServices/WFWidgetCellDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol WFWidgetGridViewDelegate;

__attribute__((visibility("hidden")))
@interface WFWidgetGridView : UIView <WFWidgetCellDelegate>
{
    id<WFWidgetGridViewDelegate> _delegate;
    unsigned long long _sizeClass;
    double _cornerRadius;
    NSMutableArray *_cells;
}

@property (strong, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property (readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFWidgetGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCell:(id)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (BOOL)cellExistsAtIndex:(unsigned long long)arg1;
- (id)cellForWorkflowWithIdentifier:(id)arg1;
- (void)disableAllCellsExceptCell:(id)arg1;
- (void)enableAllCells;
- (id)initWithSizeClass:(unsigned long long)arg1 cornerRadius:(double)arg2;
- (void)layoutWithWorkflows:(id)arg1;
- (void)widgetCellDidTransitionToState:(long long)arg1;
- (void)widgetCellWasTapped:(id)arg1;
- (id)workflowIdentifiersForVisibleCells;

@end

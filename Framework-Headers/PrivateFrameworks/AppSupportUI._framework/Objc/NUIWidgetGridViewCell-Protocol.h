//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NUIWidgetGridView;
@protocol NUIWidgetGridViewItem;

@protocol NUIWidgetGridViewCell

@property (readonly, nonatomic) unsigned long long index;

- (CDStruct_c3b9c2ee)donatableSpace;
- (CDStruct_c3b9c2ee)donatableSpaceAllowRemeasure:(BOOL)arg1;
- (id)initWithWidgetGridView:(NUIWidgetGridView *)arg1 item:(id<NUIWidgetGridViewItem>)arg2 index:(unsigned long long)arg3;
@end

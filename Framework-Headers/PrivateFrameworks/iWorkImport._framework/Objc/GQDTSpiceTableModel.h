//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDTTableModel.h>

__attribute__((visibility("hidden")))
@interface GQDTSpiceTableModel : GQDTTableModel
{
}

+ (const struct StateSpec *)stateForReading;
- (struct __CFArray *)createSizeArrayFromPositionVector:(vector_f9ed6fc8 *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (int)setColumnWidthsFromState:(id)arg1;
- (int)setRowHeightsFromState:(id)arg1;

@end


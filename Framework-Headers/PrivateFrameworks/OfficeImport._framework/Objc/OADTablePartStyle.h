//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OADTableCellStyle, OADTableTextStyle;

__attribute__((visibility("hidden")))
@interface OADTablePartStyle : NSObject
{
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;
- (void).cxx_destruct;
- (void)applyOverridesFrom:(id)arg1;
- (id)cellStyle;
- (id)description;
- (void)setCellStyle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (id)shallowCopy;
- (id)textStyle;

@end

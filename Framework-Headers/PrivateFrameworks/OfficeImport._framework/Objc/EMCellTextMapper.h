//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDString, EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellTextMapper : CMMapper
{
    EDString *edString;
    EDStyle *edStyle;
}

+ (double)contentWidthForString:(id)arg1 style:(id)arg2;
- (void).cxx_destruct;
- (double)contentWidth;
- (id)initWithEDString:(id)arg1 style:(id)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2 columnWidth:(double)arg3 height:(double)arg4 spreadLeft:(BOOL)arg5;
- (void)mapTextRunsAt:(id)arg1;
- (void)mapVerticalTextAt:(id)arg1 withState:(id)arg2 width:(double)arg3 height:(double)arg4;

@end


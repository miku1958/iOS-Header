//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPSolidBrush : MFPBrush
{
    OITSUColor *mColor;
}

- (void).cxx_destruct;
- (id)color;
- (void)fillPath:(id)arg1 evenOddRule:(BOOL)arg2;
- (id)initWithColor:(id)arg1;
- (void)setColor:(id)arg1;

@end


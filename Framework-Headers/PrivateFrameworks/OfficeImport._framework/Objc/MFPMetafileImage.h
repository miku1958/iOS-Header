//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPImage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MFPMetafileImage : MFPImage
{
    NSData *mMetafileData;
}

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (id)initWithMetafileData:(id)arg1;
- (id)phoneImage;

@end


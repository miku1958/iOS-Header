//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatJPEG : NUImageExportFormat
{
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileType;
- (id)init;
- (int)renderFormat;

@end

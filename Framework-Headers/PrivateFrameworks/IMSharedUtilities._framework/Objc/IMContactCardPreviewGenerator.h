//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMImagePreviewGenerator.h>

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (id)UTITypes;
+ (id)contactCardPreviewPayloadFileURLFrom:(id)arg1 previewURL:(id)arg2 withFileExtension:(id)arg3;
+ (id)contactCardPreviewPayloadsDirectoryFrom:(id)arg1 previewURL:(id)arg2;
+ (double)contactMonogramDiameter;
+ (id)generateContactPlistFrom:(id)arg1 previewURL:(id)arg2 error:(id *)arg3;
+ (struct CGImage *)monogramForFirstName:(id)arg1 lastName:(id)arg2;
+ (struct CGImage *)newContactCardPreviewFrom:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints)arg3 error:(id *)arg4;
+ (struct CGImage *)newMonogramImageForData:(id)arg1 constraints:(struct IMPreviewConstraints)arg2;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints)arg3 error:(id *)arg4;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (BOOL)supportsBlastDoor;
+ (id)vCardDataForURL:(id)arg1;

@end


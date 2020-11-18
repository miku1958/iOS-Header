//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class LPImageProperties, NSArray, NSData, NSString, NSURL, UIImage;
@protocol OS_dispatch_group;

@interface LPImage : NSObject <NSSecureCoding>
{
    UIImage *_originalPlatformImage;
    NSData *_data;
    NSString *_MIMEType;
    LPImageProperties *_properties;
    NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
    BOOL _placeholderIcon;
    NSArray *_remoteURLsForEmailCompatibleOutput;
    NSURL *_fileURL;
    UIImage *_platformImage;
}

@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) struct CGSize _pixelSize;
@property (nonatomic, getter=_isPlaceholderIcon) BOOL _placeholderIcon; // @synthesize _placeholderIcon;
@property (strong, nonatomic) NSArray *_remoteURLsForEmailCompatibleOutput; // @synthesize _remoteURLsForEmailCompatibleOutput;
@property (readonly, copy, nonatomic) NSData *data;
@property (strong, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (strong, nonatomic) UIImage *platformImage; // @synthesize platformImage=_platformImage;
@property (readonly, copy, nonatomic) LPImageProperties *properties;

+ (id)_PNGImageNamed:(id)arg1;
+ (id)_loadImageSubsampledToScreenSizeFromData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_createDataFromPlatformImage;
- (id)_initWithImage:(id)arg1;
- (id)_initWithPlatformImageGenerator:(CDUnknownBlockType)arg1;
- (void)_mapDataFromFileURL;
- (void)_preparePlatformImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_shouldEncodeData;
- (void)_waitForAsynchronouslyLoadedImageIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithPlatformImage:(id)arg1;
- (id)initWithPlatformImage:(id)arg1 properties:(id)arg2;

@end


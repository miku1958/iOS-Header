//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/QLPreviewItem-Protocol.h>

@class NSString, NSURL;

@interface _UIDICPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *_URL;
    NSURL *_previewURLOverride;
    NSString *_name;
    NSURL *_URLsToDeleteOnDealloc;
    NSString *_previewItemContentType;
    NSURL *_URLToDeleteOnDealloc;
    NSURL *_previewItemURLForDisplay;
}

@property (strong, nonatomic) NSURL *URLToDeleteOnDealloc; // @synthesize URLToDeleteOnDealloc=_URLToDeleteOnDealloc;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *previewItemContentType;
@property (strong, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_name;
@property (strong, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_URL;
@property (strong, nonatomic) NSURL *previewItemURLForDisplay; // @synthesize previewItemURLForDisplay=_previewItemURLForDisplay;
@property (strong, nonatomic) NSURL *previewItemURLOverride; // @synthesize previewItemURLOverride=_previewURLOverride;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_primitive_previewItemContentType;
- (void)dealloc;

@end


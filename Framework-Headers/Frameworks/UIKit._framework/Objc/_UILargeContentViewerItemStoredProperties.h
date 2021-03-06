//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

@interface _UILargeContentViewerItemStoredProperties : NSObject <NSSecureCoding>
{
    BOOL _didSetShowsLargeContentViewer;
    BOOL _showsLargeContentViewer;
    BOOL _didSetLargeContentTitle;
    BOOL _didSetLargeContentImage;
    BOOL _didSetScalesLargeContentImage;
    BOOL _scalesLargeContentImage;
    BOOL _didSetLargeContentImageInsets;
    NSString *_largeContentTitle;
    UIImage *_largeContentImage;
    struct UIEdgeInsets _largeContentImageInsets;
}

@property (nonatomic) BOOL didSetLargeContentImage; // @synthesize didSetLargeContentImage=_didSetLargeContentImage;
@property (nonatomic) BOOL didSetLargeContentImageInsets; // @synthesize didSetLargeContentImageInsets=_didSetLargeContentImageInsets;
@property (nonatomic) BOOL didSetLargeContentTitle; // @synthesize didSetLargeContentTitle=_didSetLargeContentTitle;
@property (nonatomic) BOOL didSetScalesLargeContentImage; // @synthesize didSetScalesLargeContentImage=_didSetScalesLargeContentImage;
@property (nonatomic) BOOL didSetShowsLargeContentViewer; // @synthesize didSetShowsLargeContentViewer=_didSetShowsLargeContentViewer;
@property (strong, nonatomic) UIImage *largeContentImage; // @synthesize largeContentImage=_largeContentImage;
@property (nonatomic) struct UIEdgeInsets largeContentImageInsets; // @synthesize largeContentImageInsets=_largeContentImageInsets;
@property (copy, nonatomic) NSString *largeContentTitle; // @synthesize largeContentTitle=_largeContentTitle;
@property (nonatomic) BOOL scalesLargeContentImage; // @synthesize scalesLargeContentImage=_scalesLargeContentImage;
@property (nonatomic) BOOL showsLargeContentViewer; // @synthesize showsLargeContentViewer=_showsLargeContentViewer;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


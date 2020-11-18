//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUImageRequesterChange : NSObject
{
    BOOL _imageDidChange;
    BOOL _imageIsFullQualityDidChange;
    BOOL _fullsizeImageDataDidChange;
}

@property (readonly, nonatomic) BOOL changed;
@property (nonatomic) BOOL fullsizeImageDataDidChange; // @synthesize fullsizeImageDataDidChange=_fullsizeImageDataDidChange;
@property (nonatomic) BOOL imageDidChange; // @synthesize imageDidChange=_imageDidChange;
@property (nonatomic) BOOL imageIsFullQualityDidChange; // @synthesize imageIsFullQualityDidChange=_imageIsFullQualityDidChange;

- (void)_setFullsizeImageDataDidChange:(BOOL)arg1;
- (void)_setImageDidChange:(BOOL)arg1;
- (void)_setImageIsFullQualityDidChange:(BOOL)arg1;

@end


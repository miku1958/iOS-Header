//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionARQLPreview : VUIAction
{
    NSString *_previewURLString;
    NSString *_shareURLString;
}

@property (strong, nonatomic) NSString *previewURLString; // @synthesize previewURLString=_previewURLString;
@property (strong, nonatomic) NSString *shareURLString; // @synthesize shareURLString=_shareURLString;

- (void).cxx_destruct;
- (id)initWithContextData:(id)arg1;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

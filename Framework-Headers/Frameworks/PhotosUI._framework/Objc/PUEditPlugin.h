//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSString, UIImage, _PUEditPluginApplicationExtensionActivity;

__attribute__((visibility("hidden")))
@interface PUEditPlugin : NSObject
{
    _PUEditPluginApplicationExtensionActivity *__applicationExtensionActivity;
    NSExtension *_extension;
}

@property (readonly, nonatomic) _PUEditPluginApplicationExtensionActivity *_applicationExtensionActivity; // @synthesize _applicationExtensionActivity=__applicationExtensionActivity;
@property (readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIImage *smallIcon;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithExtension:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface SKUIExternalResourceImage : NSObject
{
    BOOL _alwaysTemplate;
    NSString *_imageName;
    NSBundle *_bundle;
}

@property (nonatomic) BOOL alwaysTemplate; // @synthesize alwaysTemplate=_alwaysTemplate;
@property (strong, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;

- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayBackgroundMaterialImageRequest : NSObject
{
    NSString *_identifier;
    struct CGRect _rect;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) struct CGRect rect; // @synthesize rect=_rect;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 rect:(struct CGRect)arg2;

@end


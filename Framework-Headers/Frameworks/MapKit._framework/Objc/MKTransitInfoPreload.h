//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKTransitInfoPreload-Protocol.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface MKTransitInfoPreload : NSObject <MKTransitInfoPreload>
{
    NSAttributedString *_attributedString;
}

@property (readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)arg1;

@end


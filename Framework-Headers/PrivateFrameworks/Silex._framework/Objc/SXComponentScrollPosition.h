//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition
{
    NSString *_componentIdentifier;
    double _relativePageOffset;
    double _canvasWidth;
}

@property (nonatomic) double canvasWidth; // @synthesize canvasWidth=_canvasWidth;
@property (strong, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property (nonatomic) double relativePageOffset; // @synthesize relativePageOffset=_relativePageOffset;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

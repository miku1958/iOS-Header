//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FMAPSDelegate;

__attribute__((visibility("hidden")))
@interface FMAPSDelegateInfo : NSObject
{
    NSString *_topic;
    id<FMAPSDelegate> _delegate;
}

@property (weak, nonatomic) id<FMAPSDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *topic; // @synthesize topic=_topic;

- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGSelfIdentificationDetection : NSObject
{
    NSString *_name;
    NSString *_context;
    struct _NSRange _contextRange;
}

@property (strong, nonatomic) NSString *context; // @synthesize context=_context;
@property (nonatomic) struct _NSRange contextRange; // @synthesize contextRange=_contextRange;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFDefaultShortcut : NSObject
{
    NSString *_identifier;
}

@property (readonly, nonatomic, getter=isAlwaysVisibleOnWatch) BOOL alwaysVisibleOnWatch;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)allDefaultShortcuts;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (long long)relevanceWithContext:(id)arg1;
- (id)workflowRecordWithError:(id *)arg1;

@end

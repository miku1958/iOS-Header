//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCAsyncOperation-Protocol.h>

@class CCVegaRenderer, NSString;

@interface CCVegaSignalUpdateAsyncOperation : NSObject <CCAsyncOperation>
{
    CCVegaRenderer *_renderer;
    NSString *_name;
    id _value;
}

@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (weak, nonatomic) CCVegaRenderer *renderer; // @synthesize renderer=_renderer;
@property (strong, nonatomic) id value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)performOperationWithCallback:(CDUnknownBlockType)arg1;

@end

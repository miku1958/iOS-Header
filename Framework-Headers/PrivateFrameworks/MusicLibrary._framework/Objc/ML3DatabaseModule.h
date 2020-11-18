//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ML3DatabaseModuleContext;

@interface ML3DatabaseModule : NSObject
{
    NSString *_name;
    struct sqlite3_module *_moduleMethods;
    id<ML3DatabaseModuleContext> _context;
}

@property (strong, nonatomic) id<ML3DatabaseModuleContext> context; // @synthesize context=_context;
@property (readonly, nonatomic) struct sqlite3_module *moduleMethods; // @synthesize moduleMethods=_moduleMethods;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 moduleMethods:(struct sqlite3_module *)arg2;

@end


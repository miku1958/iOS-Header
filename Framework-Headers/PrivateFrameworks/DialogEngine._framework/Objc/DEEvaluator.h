//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEEvaluator : NSObject
{
    NSString *_templateDir;
    NSString *_locale;
    NSString *_typeName;
    NSString *_propName;
    id _parameters;
}

@property (strong, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) id parameters; // @synthesize parameters=_parameters;
@property (strong, nonatomic) NSString *propName; // @synthesize propName=_propName;
@property (strong, nonatomic) NSString *templateDir; // @synthesize templateDir=_templateDir;
@property (strong, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;

- (void).cxx_destruct;
- (id)evaluate;

@end

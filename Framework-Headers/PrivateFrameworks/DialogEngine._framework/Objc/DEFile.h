//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEFile : NSObject
{
    shared_ptr_ab06ee6d _This;
}

@property shared_ptr_ab06ee6d This; // @synthesize This=_This;
@property (strong) NSString *id;
@property (strong) NSString *localeFilename;
@property (strong) NSString *paramsFilename;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (void)addPhrase:(id)arg1;
- (id)execute:(id)arg1;
- (id)getDialogs;
- (id)getParameters;
- (id)getRoot;
- (shared_ptr_ab06ee6d)getSharedPtr;
- (id)getValidationErrors;
- (id)getValidationWarnings;
- (id)init;
- (id)initWithSharedPtr:(shared_ptr_ab06ee6d)arg1;

@end


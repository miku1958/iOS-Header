//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARTokenizer : NSObject
{
    struct BasicTextSanitizer _sanitizer;
    struct shared_ptr<quasar::TextTokenizer> _tokenizer;
}

+ (unique_ptr_3068360f)tokenizerWithNcsRoot:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithNcsRoot:(id)arg1;
- (id)tokenize:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSSPropertyCommandObjectRegistry : NSObject
{
    struct map<int, std::__1::pair<Class, std::__1::basic_string<char>>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::pair<Class, std::__1::basic_string<char>>>>> _indexToClass;
    struct map<Class, int, std::__1::less<Class>, std::__1::allocator<std::__1::pair<const Class, int>>> _classToIndex;
}

+ (void)setIntializationHandler:(CDUnknownBlockType)arg1;
+ (id)sharedRegistry;
- (id).cxx_construct;
- (void).cxx_destruct;
- (Class)classForIndex:(int)arg1;
- (int)indexForClass:(Class)arg1;
- (id)init;
- (const basic_string_a1f69cfb *)nameForIndex:(int)arg1;
- (void)registerClass:(Class)arg1 withField:(id)arg2;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDSQLiteQueryDescriptor, NSArray;

@interface HDSQLiteQueryStatement : HDSQLiteStatement {
    HDSQLiteQueryDescriptor *_descriptor;
    NSArray *_properties;
}

- (id)anyEntityWithPredicate:(id)arg1;
- (void)dealloc;
- (void)enumerateEntitiesWithPredicate:(id)arg1 usingBlock:(id)arg2;
- (id)initWithDescriptor:(id)arg1 properties:(id)arg2 database:(id)arg3 cache:(BOOL)arg4;

@end

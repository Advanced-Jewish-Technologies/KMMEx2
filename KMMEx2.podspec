Pod::Spec.new do |spec|
  spec.name = 'KMMEx2'
  spec.version = '1.0.3'
  spec.homepage = 'https://github.com/Advanced-Jewish-Technologies/KMMEx2'
  spec.source = { :git => 'https://github.com/Advanced-Jewish-Technologies/KMMEx2', :tag => spec.version.to_s }
  spec.authors = 'DarkSatyr'
  spec.license = ''
  spec.summary = 'An example project'
  spec.static_framework = true
  spec.vendored_frameworks = "KMMCexio.xcframework"
  spec.ios.deployment_target = '12.1'
end
